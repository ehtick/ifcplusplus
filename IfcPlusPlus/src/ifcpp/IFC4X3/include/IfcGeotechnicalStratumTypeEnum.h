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
	// TYPE IfcGeotechnicalStratumTypeEnum = ENUMERATION OF	(SOLID	,VOID	,WATER	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcGeotechnicalStratumTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcGeotechnicalStratumTypeEnumEnum
		{
			ENUM_SOLID,
			ENUM_VOID,
			ENUM_WATER,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcGeotechnicalStratumTypeEnum() = default;
		IfcGeotechnicalStratumTypeEnum( IfcGeotechnicalStratumTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3178974365; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcGeotechnicalStratumTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcGeotechnicalStratumTypeEnumEnum m_enum;
	};
}
