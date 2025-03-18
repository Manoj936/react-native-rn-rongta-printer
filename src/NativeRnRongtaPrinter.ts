import type { TurboModule } from 'react-native';
import { TurboModuleRegistry } from 'react-native';

export interface Spec extends TurboModule {
  initPrinter(IP: string, PORT: number): Promise<String>;
  multiply(a: number, b: number): number;
  doDisConnect(): Promise<String>;
  tscPrint(imageUrl: string, width: number, height: number): Promise<String>;
  print(text: string): Promise<String>;
}

export default TurboModuleRegistry.getEnforcing<Spec>('RnRongtaPrinter');
