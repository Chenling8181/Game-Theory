// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: test-import.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>
#if !CAPNP_LITE
#include <capnp/capability.h>
#endif  // !CAPNP_LITE

#ifndef CAPNP_VERSION
#error "CAPNP_VERSION is not defined, is capnp/generated-header-support.h missing?"
#elif CAPNP_VERSION != 1000001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "test.capnp.h"

CAPNP_BEGIN_HEADER

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(bc55b08b672b5d97);

}  // namespace schemas
}  // namespace capnp


struct TestImport {
  TestImport() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(bc55b08b672b5d97, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class TestImport::Reader {
public:
  typedef TestImport Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasField() const;
  inline  ::capnproto_test::capnp::test::TestAllTypes::Reader getField() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class TestImport::Builder {
public:
  typedef TestImport Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasField();
  inline  ::capnproto_test::capnp::test::TestAllTypes::Builder getField();
  inline void setField( ::capnproto_test::capnp::test::TestAllTypes::Reader value);
  inline  ::capnproto_test::capnp::test::TestAllTypes::Builder initField();
  inline void adoptField(::capnp::Orphan< ::capnproto_test::capnp::test::TestAllTypes>&& value);
  inline ::capnp::Orphan< ::capnproto_test::capnp::test::TestAllTypes> disownField();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class TestImport::Pipeline {
public:
  typedef TestImport Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::capnproto_test::capnp::test::TestAllTypes::Pipeline getField();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool TestImport::Reader::hasField() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool TestImport::Builder::hasField() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnproto_test::capnp::test::TestAllTypes::Reader TestImport::Reader::getField() const {
  return ::capnp::_::PointerHelpers< ::capnproto_test::capnp::test::TestAllTypes>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnproto_test::capnp::test::TestAllTypes::Builder TestImport::Builder::getField() {
  return ::capnp::_::PointerHelpers< ::capnproto_test::capnp::test::TestAllTypes>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::capnproto_test::capnp::test::TestAllTypes::Pipeline TestImport::Pipeline::getField() {
  return  ::capnproto_test::capnp::test::TestAllTypes::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void TestImport::Builder::setField( ::capnproto_test::capnp::test::TestAllTypes::Reader value) {
  ::capnp::_::PointerHelpers< ::capnproto_test::capnp::test::TestAllTypes>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnproto_test::capnp::test::TestAllTypes::Builder TestImport::Builder::initField() {
  return ::capnp::_::PointerHelpers< ::capnproto_test::capnp::test::TestAllTypes>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void TestImport::Builder::adoptField(
    ::capnp::Orphan< ::capnproto_test::capnp::test::TestAllTypes>&& value) {
  ::capnp::_::PointerHelpers< ::capnproto_test::capnp::test::TestAllTypes>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnproto_test::capnp::test::TestAllTypes> TestImport::Builder::disownField() {
  return ::capnp::_::PointerHelpers< ::capnproto_test::capnp::test::TestAllTypes>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}


CAPNP_END_HEADER

