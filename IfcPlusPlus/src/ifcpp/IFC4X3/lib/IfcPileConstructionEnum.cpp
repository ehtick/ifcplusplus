/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcPileConstructionEnum.h"

// TYPE IfcPileConstructionEnum = ENUMERATION OF	(CAST_IN_PLACE	,COMPOSITE	,PRECAST_CONCRETE	,PREFAB_STEEL	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcPileConstructionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPILECONSTRUCTIONENUM("; }
	switch( m_enum )
	{
		case ENUM_CAST_IN_PLACE:	stream << ".CAST_IN_PLACE."; break;
		case ENUM_COMPOSITE:	stream << ".COMPOSITE."; break;
		case ENUM_PRECAST_CONCRETE:	stream << ".PRECAST_CONCRETE."; break;
		case ENUM_PREFAB_STEEL:	stream << ".PREFAB_STEEL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcPileConstructionEnum> IFC4X3::IfcPileConstructionEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcPileConstructionEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcPileConstructionEnum>(); }
	shared_ptr<IfcPileConstructionEnum> type_object( new IfcPileConstructionEnum() );
	if( std_iequal( arg, ".CAST_IN_PLACE." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_CAST_IN_PLACE;
	}
	else if( std_iequal( arg, ".COMPOSITE." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_COMPOSITE;
	}
	else if( std_iequal( arg, ".PRECAST_CONCRETE." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_PRECAST_CONCRETE;
	}
	else if( std_iequal( arg, ".PREFAB_STEEL." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_PREFAB_STEEL;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}