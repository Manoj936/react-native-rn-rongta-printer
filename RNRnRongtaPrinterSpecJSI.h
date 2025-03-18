/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>
#include <react/bridging/Bridging.h>

namespace facebook::react {


  class JSI_EXPORT NativeRnRongtaPrinterCxxSpecJSI : public TurboModule {
protected:
  NativeRnRongtaPrinterCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual jsi::Value initPrinter(jsi::Runtime &rt, jsi::String IP, double PORT) = 0;
  virtual double multiply(jsi::Runtime &rt, double a, double b) = 0;
  virtual jsi::Value doDisConnect(jsi::Runtime &rt) = 0;
  virtual jsi::Value tscPrint(jsi::Runtime &rt, jsi::String imageUrl, double width, double height) = 0;
  virtual jsi::Value print(jsi::Runtime &rt, jsi::String text) = 0;

};

template <typename T>
class JSI_EXPORT NativeRnRongtaPrinterCxxSpec : public TurboModule {
public:
  jsi::Value create(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.create(rt, propName);
  }

  std::vector<jsi::PropNameID> getPropertyNames(jsi::Runtime& runtime) override {
    return delegate_.getPropertyNames(runtime);
  }

  static constexpr std::string_view kModuleName = "RnRongtaPrinter";

protected:
  NativeRnRongtaPrinterCxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule(std::string{NativeRnRongtaPrinterCxxSpec::kModuleName}, jsInvoker),
      delegate_(reinterpret_cast<T*>(this), jsInvoker) {}


private:
  class Delegate : public NativeRnRongtaPrinterCxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativeRnRongtaPrinterCxxSpecJSI(std::move(jsInvoker)), instance_(instance) {

    }

    jsi::Value initPrinter(jsi::Runtime &rt, jsi::String IP, double PORT) override {
      static_assert(
          bridging::getParameterCount(&T::initPrinter) == 3,
          "Expected initPrinter(...) to have 3 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::initPrinter, jsInvoker_, instance_, std::move(IP), std::move(PORT));
    }
    double multiply(jsi::Runtime &rt, double a, double b) override {
      static_assert(
          bridging::getParameterCount(&T::multiply) == 3,
          "Expected multiply(...) to have 3 parameters");

      return bridging::callFromJs<double>(
          rt, &T::multiply, jsInvoker_, instance_, std::move(a), std::move(b));
    }
    jsi::Value doDisConnect(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::doDisConnect) == 1,
          "Expected doDisConnect(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::doDisConnect, jsInvoker_, instance_);
    }
    jsi::Value tscPrint(jsi::Runtime &rt, jsi::String imageUrl, double width, double height) override {
      static_assert(
          bridging::getParameterCount(&T::tscPrint) == 4,
          "Expected tscPrint(...) to have 4 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::tscPrint, jsInvoker_, instance_, std::move(imageUrl), std::move(width), std::move(height));
    }
    jsi::Value print(jsi::Runtime &rt, jsi::String text) override {
      static_assert(
          bridging::getParameterCount(&T::print) == 2,
          "Expected print(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::print, jsInvoker_, instance_, std::move(text));
    }

  private:
    friend class NativeRnRongtaPrinterCxxSpec;
    T *instance_;
  };

  Delegate delegate_;
};

} // namespace facebook::react
