/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcExternalSpatialElementTypeEnum.h"

// TYPE IfcExternalSpatialElementTypeEnum = ENUMERATION OF	(EXTERNAL	,EXTERNAL_EARTH	,EXTERNAL_WATER	,EXTERNAL_FIRE	,USERDEFINED	,NOTDEFINED);
IfcExternalSpatialElementTypeEnum::IfcExternalSpatialElementTypeEnum() {}
IfcExternalSpatialElementTypeEnum::~IfcExternalSpatialElementTypeEnum() {}
shared_ptr<IfcPPObject> IfcExternalSpatialElementTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcExternalSpatialElementTypeEnum> copy_self( new IfcExternalSpatialElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcExternalSpatialElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCEXTERNALSPATIALELEMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_EXTERNAL:	stream << ".EXTERNAL."; break;
		case ENUM_EXTERNAL_EARTH:	stream << ".EXTERNAL_EARTH."; break;
		case ENUM_EXTERNAL_WATER:	stream << ".EXTERNAL_WATER."; break;
		case ENUM_EXTERNAL_FIRE:	stream << ".EXTERNAL_FIRE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcExternalSpatialElementTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_EXTERNAL:	return L"EXTERNAL";
		case ENUM_EXTERNAL_EARTH:	return L"EXTERNAL_EARTH";
		case ENUM_EXTERNAL_WATER:	return L"EXTERNAL_WATER";
		case ENUM_EXTERNAL_FIRE:	return L"EXTERNAL_FIRE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcExternalSpatialElementTypeEnum> IfcExternalSpatialElementTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcExternalSpatialElementTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcExternalSpatialElementTypeEnum>(); }
	shared_ptr<IfcExternalSpatialElementTypeEnum> type_object( new IfcExternalSpatialElementTypeEnum() );
	if( boost::iequals( arg, L".EXTERNAL." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL;
	}
	else if( boost::iequals( arg, L".EXTERNAL_EARTH." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_EARTH;
	}
	else if( boost::iequals( arg, L".EXTERNAL_WATER." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_WATER;
	}
	else if( boost::iequals( arg, L".EXTERNAL_FIRE." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_FIRE;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}