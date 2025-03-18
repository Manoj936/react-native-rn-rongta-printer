import RnRongtaPrinter from './NativeRnRongtaPrinter';

export function multiply(a: number, b: number): number {
  return RnRongtaPrinter.multiply(a, b);
}

// Connect to the printer over same wifi network 
export function ConnectPrinter(IP : string , PORT :  number) {
  return new Promise((resolve, reject) => {
    if (!IP || !PORT) {
      reject("IP & PORT are required");
      return;
    }
    RnRongtaPrinter.initPrinter(IP, PORT).then(resolve).catch(reject);
  });
} 

//Disconnect the printer if once connected
export function Disconnect() {
  return new Promise((resolve, reject) => {
    RnRongtaPrinter.doDisConnect().then(resolve).catch(reject);
  });
}

//Send image url for print
export function TSCImagePrint(imageUrl : string , width : number  = 95, height:number = 250){
  return new Promise((resolve, reject) => {
    if (!imageUrl) {
      reject("Image URL is required");
      return;
    }
    RnRongtaPrinter.tscPrint(imageUrl, width, height)
      .then(resolve)
      .catch(reject);
  });
}

//Send sample text for print
export function PrintText(text:string){
  return new Promise((resolve, reject) => {
    if (!text || text.trim() === "") {
      reject("Give some text to proceed");
      return;
    }
    RnRongtaPrinter.print(text).then(resolve).catch(reject);
  });
}