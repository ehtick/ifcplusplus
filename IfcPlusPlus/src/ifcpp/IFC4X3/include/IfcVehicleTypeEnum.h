/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcVehicleTypeEnum = ENUMERATION OF	(CARGO	,ROLLINGSTOCK	,VEHICLE	,VEHICLEAIR	,VEHICLEMARINE	,VEHICLETRACKED	,VEHICLEWHEELED	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcVehicleTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcVehicleTypeEnumEnum
		{
			ENUM_CARGO,
			ENUM_ROLLINGSTOCK,
			ENUM_VEHICLE,
			ENUM_VEHICLEAIR,
			ENUM_VEHICLEMARINE,
			ENUM_VEHICLETRACKED,
			ENUM_VEHICLEWHEELED,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcVehicleTypeEnum() = default;
		IfcVehicleTypeEnum( IfcVehicleTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1184275752; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcVehicleTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcVehicleTypeEnumEnum m_enum;
	};
}
