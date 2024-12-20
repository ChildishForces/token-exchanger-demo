///
/// NitroTokenExchanger-Swift-Cxx-Bridge.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `HybridExchangerModuleSpec` to properly resolve imports.
namespace margelo::nitro::tokenexchanger { class HybridExchangerModuleSpec; }

// Forward declarations of Swift defined types
// Forward declaration of `HybridExchangerModuleSpec_cxx` to properly resolve imports.
namespace NitroTokenExchanger { class HybridExchangerModuleSpec_cxx; }

// Include C++ defined types
#include "HybridExchangerModuleSpec.hpp"
#include <NitroModules/Promise.hpp>
#include <NitroModules/Result.hpp>
#include <exception>
#include <functional>
#include <memory>
#include <string>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::tokenexchanger::bridge::swift {

  // pragma MARK: std::shared_ptr<Promise<std::string>>
  /**
   * Specialized version of `std::shared_ptr<Promise<std::string>>`.
   */
  using std__shared_ptr_Promise_std__string__ = std::shared_ptr<Promise<std::string>>;
  inline std::shared_ptr<Promise<std::string>> create_std__shared_ptr_Promise_std__string__() {
    return Promise<std::string>::create();
  }
  
  // pragma MARK: std::function<void(const std::string& /* result */)>
  /**
   * Specialized version of `std::function<void(const std::string&)>`.
   */
  using Func_void_std__string = std::function<void(const std::string& /* result */)>;
  /**
   * Wrapper class for a `std::function<void(const std::string& / * result * /)>`, this can be used from Swift.
   */
  class Func_void_std__string_Wrapper final {
  public:
    explicit Func_void_std__string_Wrapper(const std::function<void(const std::string& /* result */)>& func): _function(func) {}
    explicit Func_void_std__string_Wrapper(std::function<void(const std::string& /* result */)>&& func): _function(std::move(func)) {}
    inline void call(std::string result) const {
      _function(result);
    }
  private:
    std::function<void(const std::string& /* result */)> _function;
  };
  inline Func_void_std__string create_Func_void_std__string(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::string), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__string([sharedClosureHolder, call](const std::string& result) -> void {
      new std::shared_ptr<void>(sharedClosureHolder);
      call(sharedClosureHolder.get(), result);
    });
  }
  inline std::shared_ptr<Func_void_std__string_Wrapper> share_Func_void_std__string(const Func_void_std__string& value) {
    return std::make_shared<Func_void_std__string_Wrapper>(value);
  }
  
  // pragma MARK: std::function<void(const std::exception_ptr& /* error */)>
  /**
   * Specialized version of `std::function<void(const std::exception_ptr&)>`.
   */
  using Func_void_std__exception_ptr = std::function<void(const std::exception_ptr& /* error */)>;
  /**
   * Wrapper class for a `std::function<void(const std::exception_ptr& / * error * /)>`, this can be used from Swift.
   */
  class Func_void_std__exception_ptr_Wrapper final {
  public:
    explicit Func_void_std__exception_ptr_Wrapper(const std::function<void(const std::exception_ptr& /* error */)>& func): _function(func) {}
    explicit Func_void_std__exception_ptr_Wrapper(std::function<void(const std::exception_ptr& /* error */)>&& func): _function(std::move(func)) {}
    inline void call(std::exception_ptr error) const {
      _function(error);
    }
  private:
    std::function<void(const std::exception_ptr& /* error */)> _function;
  };
  inline Func_void_std__exception_ptr create_Func_void_std__exception_ptr(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::exception_ptr), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__exception_ptr([sharedClosureHolder, call](const std::exception_ptr& error) -> void {
      new std::shared_ptr<void>(sharedClosureHolder);
      call(sharedClosureHolder.get(), error);
    });
  }
  inline std::shared_ptr<Func_void_std__exception_ptr_Wrapper> share_Func_void_std__exception_ptr(const Func_void_std__exception_ptr& value) {
    return std::make_shared<Func_void_std__exception_ptr_Wrapper>(value);
  }
  
  // pragma MARK: std::function<std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(const std::string& /* setupToken */)>
  /**
   * Specialized version of `std::function<std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(const std::string&)>`.
   */
  using Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string = std::function<std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(const std::string& /* setupToken */)>;
  /**
   * Wrapper class for a `std::function<std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(const std::string& / * setupToken * /)>`, this can be used from Swift.
   */
  class Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string_Wrapper final {
  public:
    explicit Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string_Wrapper(const std::function<std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(const std::string& /* setupToken */)>& func): _function(func) {}
    explicit Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string_Wrapper(std::function<std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(const std::string& /* setupToken */)>&& func): _function(std::move(func)) {}
    inline std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>> call(std::string setupToken) const {
      auto __result = _function(setupToken);
      new std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(__result);
      return __result;
    }
  private:
    std::function<std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(const std::string& /* setupToken */)> _function;
  };
  inline Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string create_Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string(void* _Nonnull closureHolder, std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::string), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string([sharedClosureHolder, call](const std::string& setupToken) -> std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>> {
      auto __result = call(sharedClosureHolder.get(), setupToken);
      new std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>(__result);
      return __result;
    });
  }
  inline std::shared_ptr<Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string_Wrapper> share_Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string(const Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string& value) {
    return std::make_shared<Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string_Wrapper>(value);
  }
  
  // pragma MARK: std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>
  /**
   * Specialized version of `std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>`.
   */
  using std__shared_ptr_Promise_std__shared_ptr_Promise_std__string____ = std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>>;
  inline std::shared_ptr<Promise<std::shared_ptr<Promise<std::string>>>> create_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string____() {
    return Promise<std::shared_ptr<Promise<std::string>>>::create();
  }
  
  // pragma MARK: std::function<void(const std::shared_ptr<Promise<std::string>>& /* result */)>
  /**
   * Specialized version of `std::function<void(const std::shared_ptr<Promise<std::string>>&)>`.
   */
  using Func_void_std__shared_ptr_Promise_std__string__ = std::function<void(const std::shared_ptr<Promise<std::string>>& /* result */)>;
  /**
   * Wrapper class for a `std::function<void(const std::shared_ptr<Promise<std::string>>& / * result * /)>`, this can be used from Swift.
   */
  class Func_void_std__shared_ptr_Promise_std__string___Wrapper final {
  public:
    explicit Func_void_std__shared_ptr_Promise_std__string___Wrapper(const std::function<void(const std::shared_ptr<Promise<std::string>>& /* result */)>& func): _function(func) {}
    explicit Func_void_std__shared_ptr_Promise_std__string___Wrapper(std::function<void(const std::shared_ptr<Promise<std::string>>& /* result */)>&& func): _function(std::move(func)) {}
    inline void call(std::shared_ptr<Promise<std::string>> result) const {
      _function(result);
    }
  private:
    std::function<void(const std::shared_ptr<Promise<std::string>>& /* result */)> _function;
  };
  inline Func_void_std__shared_ptr_Promise_std__string__ create_Func_void_std__shared_ptr_Promise_std__string__(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::shared_ptr<Promise<std::string>>), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__shared_ptr_Promise_std__string__([sharedClosureHolder, call](const std::shared_ptr<Promise<std::string>>& result) -> void {
      call(sharedClosureHolder.get(), result);
    });
  }
  inline std::shared_ptr<Func_void_std__shared_ptr_Promise_std__string___Wrapper> share_Func_void_std__shared_ptr_Promise_std__string__(const Func_void_std__shared_ptr_Promise_std__string__& value) {
    return std::make_shared<Func_void_std__shared_ptr_Promise_std__string___Wrapper>(value);
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::tokenexchanger::HybridExchangerModuleSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::tokenexchanger::HybridExchangerModuleSpec>`.
   */
  using std__shared_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_ = std::shared_ptr<margelo::nitro::tokenexchanger::HybridExchangerModuleSpec>;
  std::shared_ptr<margelo::nitro::tokenexchanger::HybridExchangerModuleSpec> create_std__shared_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_(std__shared_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_ cppType);
  
  // pragma MARK: std::weak_ptr<margelo::nitro::tokenexchanger::HybridExchangerModuleSpec>
  using std__weak_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_ = std::weak_ptr<margelo::nitro::tokenexchanger::HybridExchangerModuleSpec>;
  inline std__weak_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_ weakify_std__shared_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_(const std::shared_ptr<margelo::nitro::tokenexchanger::HybridExchangerModuleSpec>& strong) { return strong; }
  
  // pragma MARK: Result<void>
  using Result_void_ = Result<void>;
  inline Result_void_ create_Result_void_() {
    return Result<void>::withValue();
  }
  inline Result_void_ create_Result_void_(const std::exception_ptr& error) {
    return Result<void>::withError(error);
  }
  
  // pragma MARK: Result<std::shared_ptr<Promise<std::string>>>
  using Result_std__shared_ptr_Promise_std__string___ = Result<std::shared_ptr<Promise<std::string>>>;
  inline Result_std__shared_ptr_Promise_std__string___ create_Result_std__shared_ptr_Promise_std__string___(const std::shared_ptr<Promise<std::string>>& value) {
    return Result<std::shared_ptr<Promise<std::string>>>::withValue(value);
  }
  inline Result_std__shared_ptr_Promise_std__string___ create_Result_std__shared_ptr_Promise_std__string___(const std::exception_ptr& error) {
    return Result<std::shared_ptr<Promise<std::string>>>::withError(error);
  }

} // namespace margelo::nitro::tokenexchanger::bridge::swift
