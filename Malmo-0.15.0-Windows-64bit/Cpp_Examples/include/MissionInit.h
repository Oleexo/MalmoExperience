// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef C__TIM_MALMO_GITHUB_SCHEMAS_MISSION_INIT_H
#define C__TIM_MALMO_GITHUB_SCHEMAS_MISSION_INIT_H

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 4000000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

#include <xsd/cxx/xml/dom/serialization-header.hxx>
#include <xsd/cxx/tree/serialization.hxx>
#include <xsd/cxx/tree/serialization/byte.hxx>
#include <xsd/cxx/tree/serialization/unsigned-byte.hxx>
#include <xsd/cxx/tree/serialization/short.hxx>
#include <xsd/cxx/tree/serialization/unsigned-short.hxx>
#include <xsd/cxx/tree/serialization/int.hxx>
#include <xsd/cxx/tree/serialization/unsigned-int.hxx>
#include <xsd/cxx/tree/serialization/long.hxx>
#include <xsd/cxx/tree/serialization/unsigned-long.hxx>
#include <xsd/cxx/tree/serialization/boolean.hxx>
#include <xsd/cxx/tree/serialization/float.hxx>
#include <xsd/cxx/tree/serialization/double.hxx>
#include <xsd/cxx/tree/serialization/decimal.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< char, type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< char, ncname, type > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  typedef ::xsd::cxx::tree::content_order content_order;
  // Namespace information and list stream. Used in
  // serialization functions.
  //
  typedef ::xsd::cxx::xml::dom::namespace_info< char > namespace_info;
  typedef ::xsd::cxx::xml::dom::namespace_infomap< char > namespace_infomap;
  typedef ::xsd::cxx::tree::list_stream< char > list_stream;
  typedef ::xsd::cxx::tree::as_double< double_ > as_double;
  typedef ::xsd::cxx::tree::as_decimal< decimal > as_decimal;
  typedef ::xsd::cxx::tree::facet facet;

  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;
  typedef ::xsd::cxx::tree::no_type_info< char > no_type_info;
  typedef ::xsd::cxx::tree::not_derived< char > not_derived;
  typedef ::xsd::cxx::tree::serialization< char > serialization;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::auto_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
namespace malmo
{
  namespace schemas
  {
    class MissionInit;
    class MinecraftServerConnection;
    class ClientAgentConnection;
  }
}


#include <memory>    // ::std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "mission.h"

namespace malmo
{
  namespace schemas
  {
    class MissionInit: public ::xml_schema::type
    {
      public:
      // Mission
      //
      typedef ::malmo::schemas::Mission Mission_type;
      typedef ::xsd::cxx::tree::traits< Mission_type, char > Mission_traits;

      const Mission_type&
      Mission () const;

      Mission_type&
      Mission ();

      void
      Mission (const Mission_type& x);

      void
      Mission (::std::auto_ptr< Mission_type > p);

      // ExperimentUID
      //
      typedef ::xml_schema::string ExperimentUID_type;
      typedef ::xsd::cxx::tree::traits< ExperimentUID_type, char > ExperimentUID_traits;

      const ExperimentUID_type&
      ExperimentUID () const;

      ExperimentUID_type&
      ExperimentUID ();

      void
      ExperimentUID (const ExperimentUID_type& x);

      void
      ExperimentUID (::std::auto_ptr< ExperimentUID_type > p);

      // MinecraftServerConnection
      //
      typedef ::malmo::schemas::MinecraftServerConnection MinecraftServerConnection_type;
      typedef ::xsd::cxx::tree::optional< MinecraftServerConnection_type > MinecraftServerConnection_optional;
      typedef ::xsd::cxx::tree::traits< MinecraftServerConnection_type, char > MinecraftServerConnection_traits;

      const MinecraftServerConnection_optional&
      MinecraftServerConnection () const;

      MinecraftServerConnection_optional&
      MinecraftServerConnection ();

      void
      MinecraftServerConnection (const MinecraftServerConnection_type& x);

      void
      MinecraftServerConnection (const MinecraftServerConnection_optional& x);

      void
      MinecraftServerConnection (::std::auto_ptr< MinecraftServerConnection_type > p);

      // ClientRole
      //
      typedef ::xml_schema::int_ ClientRole_type;
      typedef ::xsd::cxx::tree::traits< ClientRole_type, char > ClientRole_traits;

      const ClientRole_type&
      ClientRole () const;

      ClientRole_type&
      ClientRole ();

      void
      ClientRole (const ClientRole_type& x);

      // ClientAgentConnection
      //
      typedef ::malmo::schemas::ClientAgentConnection ClientAgentConnection_type;
      typedef ::xsd::cxx::tree::traits< ClientAgentConnection_type, char > ClientAgentConnection_traits;

      const ClientAgentConnection_type&
      ClientAgentConnection () const;

      ClientAgentConnection_type&
      ClientAgentConnection ();

      void
      ClientAgentConnection (const ClientAgentConnection_type& x);

      void
      ClientAgentConnection (::std::auto_ptr< ClientAgentConnection_type > p);

      // SchemaVersion
      //
      typedef ::xml_schema::token SchemaVersion_type;
      typedef ::xsd::cxx::tree::optional< SchemaVersion_type > SchemaVersion_optional;
      typedef ::xsd::cxx::tree::traits< SchemaVersion_type, char > SchemaVersion_traits;

      const SchemaVersion_optional&
      SchemaVersion () const;

      SchemaVersion_optional&
      SchemaVersion ();

      void
      SchemaVersion (const SchemaVersion_type& x);

      void
      SchemaVersion (const SchemaVersion_optional& x);

      void
      SchemaVersion (::std::auto_ptr< SchemaVersion_type > p);

      // Constructors.
      //
      MissionInit (const Mission_type&,
                   const ExperimentUID_type&,
                   const ClientRole_type&,
                   const ClientAgentConnection_type&);

      MissionInit (::std::auto_ptr< Mission_type >,
                   const ExperimentUID_type&,
                   const ClientRole_type&,
                   ::std::auto_ptr< ClientAgentConnection_type >);

      MissionInit (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

      MissionInit (const MissionInit& x,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

      virtual MissionInit*
      _clone (::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0) const;

      MissionInit&
      operator= (const MissionInit& x);

      virtual 
      ~MissionInit ();

      // Implementation.
      //
      protected:
      void
      parse (::xsd::cxx::xml::dom::parser< char >&,
             ::xml_schema::flags);

      protected:
      ::xsd::cxx::tree::one< Mission_type > Mission_;
      ::xsd::cxx::tree::one< ExperimentUID_type > ExperimentUID_;
      MinecraftServerConnection_optional MinecraftServerConnection_;
      ::xsd::cxx::tree::one< ClientRole_type > ClientRole_;
      ::xsd::cxx::tree::one< ClientAgentConnection_type > ClientAgentConnection_;
      SchemaVersion_optional SchemaVersion_;
    };

    class MinecraftServerConnection: public ::xml_schema::type
    {
      public:
      // address
      //
      typedef ::xml_schema::string address_type;
      typedef ::xsd::cxx::tree::traits< address_type, char > address_traits;

      const address_type&
      address () const;

      address_type&
      address ();

      void
      address (const address_type& x);

      void
      address (::std::auto_ptr< address_type > p);

      // port
      //
      typedef ::xml_schema::int_ port_type;
      typedef ::xsd::cxx::tree::traits< port_type, char > port_traits;

      const port_type&
      port () const;

      port_type&
      port ();

      void
      port (const port_type& x);

      // Constructors.
      //
      MinecraftServerConnection (const address_type&,
                                 const port_type&);

      MinecraftServerConnection (const ::xercesc::DOMElement& e,
                                 ::xml_schema::flags f = 0,
                                 ::xml_schema::container* c = 0);

      MinecraftServerConnection (const MinecraftServerConnection& x,
                                 ::xml_schema::flags f = 0,
                                 ::xml_schema::container* c = 0);

      virtual MinecraftServerConnection*
      _clone (::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0) const;

      MinecraftServerConnection&
      operator= (const MinecraftServerConnection& x);

      virtual 
      ~MinecraftServerConnection ();

      // Implementation.
      //
      protected:
      void
      parse (::xsd::cxx::xml::dom::parser< char >&,
             ::xml_schema::flags);

      protected:
      ::xsd::cxx::tree::one< address_type > address_;
      ::xsd::cxx::tree::one< port_type > port_;
    };

    class ClientAgentConnection: public ::xml_schema::type
    {
      public:
      // ClientIPAddress
      //
      typedef ::xml_schema::string ClientIPAddress_type;
      typedef ::xsd::cxx::tree::traits< ClientIPAddress_type, char > ClientIPAddress_traits;

      const ClientIPAddress_type&
      ClientIPAddress () const;

      ClientIPAddress_type&
      ClientIPAddress ();

      void
      ClientIPAddress (const ClientIPAddress_type& x);

      void
      ClientIPAddress (::std::auto_ptr< ClientIPAddress_type > p);

      // ClientMissionControlPort
      //
      typedef ::xml_schema::int_ ClientMissionControlPort_type;
      typedef ::xsd::cxx::tree::traits< ClientMissionControlPort_type, char > ClientMissionControlPort_traits;

      const ClientMissionControlPort_type&
      ClientMissionControlPort () const;

      ClientMissionControlPort_type&
      ClientMissionControlPort ();

      void
      ClientMissionControlPort (const ClientMissionControlPort_type& x);

      // ClientCommandsPort
      //
      typedef ::xml_schema::int_ ClientCommandsPort_type;
      typedef ::xsd::cxx::tree::traits< ClientCommandsPort_type, char > ClientCommandsPort_traits;

      const ClientCommandsPort_type&
      ClientCommandsPort () const;

      ClientCommandsPort_type&
      ClientCommandsPort ();

      void
      ClientCommandsPort (const ClientCommandsPort_type& x);

      // AgentIPAddress
      //
      typedef ::xml_schema::string AgentIPAddress_type;
      typedef ::xsd::cxx::tree::traits< AgentIPAddress_type, char > AgentIPAddress_traits;

      const AgentIPAddress_type&
      AgentIPAddress () const;

      AgentIPAddress_type&
      AgentIPAddress ();

      void
      AgentIPAddress (const AgentIPAddress_type& x);

      void
      AgentIPAddress (::std::auto_ptr< AgentIPAddress_type > p);

      // AgentMissionControlPort
      //
      typedef ::xml_schema::int_ AgentMissionControlPort_type;
      typedef ::xsd::cxx::tree::traits< AgentMissionControlPort_type, char > AgentMissionControlPort_traits;

      const AgentMissionControlPort_type&
      AgentMissionControlPort () const;

      AgentMissionControlPort_type&
      AgentMissionControlPort ();

      void
      AgentMissionControlPort (const AgentMissionControlPort_type& x);

      // AgentVideoPort
      //
      typedef ::xml_schema::int_ AgentVideoPort_type;
      typedef ::xsd::cxx::tree::traits< AgentVideoPort_type, char > AgentVideoPort_traits;

      const AgentVideoPort_type&
      AgentVideoPort () const;

      AgentVideoPort_type&
      AgentVideoPort ();

      void
      AgentVideoPort (const AgentVideoPort_type& x);

      // AgentObservationsPort
      //
      typedef ::xml_schema::int_ AgentObservationsPort_type;
      typedef ::xsd::cxx::tree::traits< AgentObservationsPort_type, char > AgentObservationsPort_traits;

      const AgentObservationsPort_type&
      AgentObservationsPort () const;

      AgentObservationsPort_type&
      AgentObservationsPort ();

      void
      AgentObservationsPort (const AgentObservationsPort_type& x);

      // AgentRewardsPort
      //
      typedef ::xml_schema::int_ AgentRewardsPort_type;
      typedef ::xsd::cxx::tree::traits< AgentRewardsPort_type, char > AgentRewardsPort_traits;

      const AgentRewardsPort_type&
      AgentRewardsPort () const;

      AgentRewardsPort_type&
      AgentRewardsPort ();

      void
      AgentRewardsPort (const AgentRewardsPort_type& x);

      // Constructors.
      //
      ClientAgentConnection (const ClientIPAddress_type&,
                             const ClientMissionControlPort_type&,
                             const ClientCommandsPort_type&,
                             const AgentIPAddress_type&,
                             const AgentMissionControlPort_type&,
                             const AgentVideoPort_type&,
                             const AgentObservationsPort_type&,
                             const AgentRewardsPort_type&);

      ClientAgentConnection (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f = 0,
                             ::xml_schema::container* c = 0);

      ClientAgentConnection (const ClientAgentConnection& x,
                             ::xml_schema::flags f = 0,
                             ::xml_schema::container* c = 0);

      virtual ClientAgentConnection*
      _clone (::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0) const;

      ClientAgentConnection&
      operator= (const ClientAgentConnection& x);

      virtual 
      ~ClientAgentConnection ();

      // Implementation.
      //
      protected:
      void
      parse (::xsd::cxx::xml::dom::parser< char >&,
             ::xml_schema::flags);

      protected:
      ::xsd::cxx::tree::one< ClientIPAddress_type > ClientIPAddress_;
      ::xsd::cxx::tree::one< ClientMissionControlPort_type > ClientMissionControlPort_;
      ::xsd::cxx::tree::one< ClientCommandsPort_type > ClientCommandsPort_;
      ::xsd::cxx::tree::one< AgentIPAddress_type > AgentIPAddress_;
      ::xsd::cxx::tree::one< AgentMissionControlPort_type > AgentMissionControlPort_;
      ::xsd::cxx::tree::one< AgentVideoPort_type > AgentVideoPort_;
      ::xsd::cxx::tree::one< AgentObservationsPort_type > AgentObservationsPort_;
      ::xsd::cxx::tree::one< AgentRewardsPort_type > AgentRewardsPort_;
    };
  }
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace malmo
{
  namespace schemas
  {
    // Parse a URI or a local file.
    //

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (const ::std::string& uri,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (const ::std::string& uri,
                  ::xml_schema::error_handler& eh,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (const ::std::string& uri,
                  ::xercesc::DOMErrorHandler& eh,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse std::istream.
    //

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::std::istream& is,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::std::istream& is,
                  ::xml_schema::error_handler& eh,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::std::istream& is,
                  ::xercesc::DOMErrorHandler& eh,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::std::istream& is,
                  const ::std::string& id,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::std::istream& is,
                  const ::std::string& id,
                  ::xml_schema::error_handler& eh,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::std::istream& is,
                  const ::std::string& id,
                  ::xercesc::DOMErrorHandler& eh,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse xercesc::InputSource.
    //

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::xercesc::InputSource& is,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::xercesc::InputSource& is,
                  ::xml_schema::error_handler& eh,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::xercesc::InputSource& is,
                  ::xercesc::DOMErrorHandler& eh,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    // Parse xercesc::DOMDocument.
    //

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (const ::xercesc::DOMDocument& d,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());

    ::std::auto_ptr< ::malmo::schemas::MissionInit >
    MissionInit_ (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d,
                  ::xml_schema::flags f = 0,
                  const ::xml_schema::properties& p = ::xml_schema::properties ());
  }
}

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

namespace malmo
{
  namespace schemas
  {
    // Serialize to std::ostream.
    //

    void
    MissionInit_ (::std::ostream& os,
                  const ::malmo::schemas::MissionInit& x, 
                  const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                  const ::std::string& e = "UTF-8",
                  ::xml_schema::flags f = 0);

    void
    MissionInit_ (::std::ostream& os,
                  const ::malmo::schemas::MissionInit& x, 
                  ::xml_schema::error_handler& eh,
                  const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                  const ::std::string& e = "UTF-8",
                  ::xml_schema::flags f = 0);

    void
    MissionInit_ (::std::ostream& os,
                  const ::malmo::schemas::MissionInit& x, 
                  ::xercesc::DOMErrorHandler& eh,
                  const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                  const ::std::string& e = "UTF-8",
                  ::xml_schema::flags f = 0);

    // Serialize to xercesc::XMLFormatTarget.
    //

    void
    MissionInit_ (::xercesc::XMLFormatTarget& ft,
                  const ::malmo::schemas::MissionInit& x, 
                  const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                  const ::std::string& e = "UTF-8",
                  ::xml_schema::flags f = 0);

    void
    MissionInit_ (::xercesc::XMLFormatTarget& ft,
                  const ::malmo::schemas::MissionInit& x, 
                  ::xml_schema::error_handler& eh,
                  const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                  const ::std::string& e = "UTF-8",
                  ::xml_schema::flags f = 0);

    void
    MissionInit_ (::xercesc::XMLFormatTarget& ft,
                  const ::malmo::schemas::MissionInit& x, 
                  ::xercesc::DOMErrorHandler& eh,
                  const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                  const ::std::string& e = "UTF-8",
                  ::xml_schema::flags f = 0);

    // Serialize to an existing xercesc::DOMDocument.
    //

    void
    MissionInit_ (::xercesc::DOMDocument& d,
                  const ::malmo::schemas::MissionInit& x,
                  ::xml_schema::flags f = 0);

    // Serialize to a new xercesc::DOMDocument.
    //

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >
    MissionInit_ (const ::malmo::schemas::MissionInit& x, 
                  const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                  ::xml_schema::flags f = 0);

    void
    operator<< (::xercesc::DOMElement&, const MissionInit&);

    void
    operator<< (::xercesc::DOMElement&, const MinecraftServerConnection&);

    void
    operator<< (::xercesc::DOMElement&, const ClientAgentConnection&);
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // C__TIM_MALMO_GITHUB_SCHEMAS_MISSION_INIT_H
