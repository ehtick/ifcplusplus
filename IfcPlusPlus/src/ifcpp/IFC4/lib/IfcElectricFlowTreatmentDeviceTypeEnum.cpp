/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcElectricFlowTreatmentDeviceTypeEnum.h"

// TYPE IfcElectricFlowTreatmentDeviceTypeEnum = ENUMERATION OF	(ELECTRONICFILTER	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcElectricFlowTreatmentDeviceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcElectricFlowTreatmentDeviceTypeEnum> copy_self( new IfcElectricFlowTreatmentDeviceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcElectricFlowTreatmentDeviceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELECTRICFLOWTREATMENTDEVICETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ELECTRONICFILTER:	stream << ".ELECTRONICFILTER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcElectricFlowTreatmentDeviceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ELECTRONICFILTER:	return L"ELECTRONICFILTER";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcElectricFlowTreatmentDeviceTypeEnum> IfcElectricFlowTreatmentDeviceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElectricFlowTreatmentDeviceTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElectricFlowTreatmentDeviceTypeEnum>(); }
	shared_ptr<IfcElectricFlowTreatmentDeviceTypeEnum> type_object( new IfcElectricFlowTreatmentDeviceTypeEnum() );
	if( std_iequal( arg, L".ELECTRONICFILTER." ) )
	{
		type_object->m_enum = IfcElectricFlowTreatmentDeviceTypeEnum::ENUM_ELECTRONICFILTER;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElectricFlowTreatmentDeviceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElectricFlowTreatmentDeviceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}