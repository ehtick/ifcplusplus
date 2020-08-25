/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcBridgeTypeEnum.h"

// TYPE IfcBridgeTypeEnum = ENUMERATION OF	(ARCHED	,CABLE_STAYED	,CANTILEVER	,CULVERT	,FRAMEWORK	,GIRDER	,SUSPENSION	,TRUSS	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcBridgeTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBridgeTypeEnum> copy_self( new IfcBridgeTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcBridgeTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCBRIDGETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ARCHED:	stream << ".ARCHED."; break;
		case ENUM_CABLE_STAYED:	stream << ".CABLE_STAYED."; break;
		case ENUM_CANTILEVER:	stream << ".CANTILEVER."; break;
		case ENUM_CULVERT:	stream << ".CULVERT."; break;
		case ENUM_FRAMEWORK:	stream << ".FRAMEWORK."; break;
		case ENUM_GIRDER:	stream << ".GIRDER."; break;
		case ENUM_SUSPENSION:	stream << ".SUSPENSION."; break;
		case ENUM_TRUSS:	stream << ".TRUSS."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcBridgeTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ARCHED:	return L"ARCHED";
		case ENUM_CABLE_STAYED:	return L"CABLE_STAYED";
		case ENUM_CANTILEVER:	return L"CANTILEVER";
		case ENUM_CULVERT:	return L"CULVERT";
		case ENUM_FRAMEWORK:	return L"FRAMEWORK";
		case ENUM_GIRDER:	return L"GIRDER";
		case ENUM_SUSPENSION:	return L"SUSPENSION";
		case ENUM_TRUSS:	return L"TRUSS";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcBridgeTypeEnum> IfcBridgeTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcBridgeTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcBridgeTypeEnum>(); }
	shared_ptr<IfcBridgeTypeEnum> type_object( new IfcBridgeTypeEnum() );
	if( std_iequal( arg, L".ARCHED." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_ARCHED;
	}
	else if( std_iequal( arg, L".CABLE_STAYED." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_CABLE_STAYED;
	}
	else if( std_iequal( arg, L".CANTILEVER." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_CANTILEVER;
	}
	else if( std_iequal( arg, L".CULVERT." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_CULVERT;
	}
	else if( std_iequal( arg, L".FRAMEWORK." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_FRAMEWORK;
	}
	else if( std_iequal( arg, L".GIRDER." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_GIRDER;
	}
	else if( std_iequal( arg, L".SUSPENSION." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_SUSPENSION;
	}
	else if( std_iequal( arg, L".TRUSS." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_TRUSS;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcBridgeTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}