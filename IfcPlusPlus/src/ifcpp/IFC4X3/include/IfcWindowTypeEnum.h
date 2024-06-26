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
	// TYPE IfcWindowTypeEnum = ENUMERATION OF	(LIGHTDOME	,SKYLIGHT	,WINDOW	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcWindowTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcWindowTypeEnumEnum
		{
			ENUM_LIGHTDOME,
			ENUM_SKYLIGHT,
			ENUM_WINDOW,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcWindowTypeEnum() = default;
		IfcWindowTypeEnum( IfcWindowTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 255461614; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcWindowTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcWindowTypeEnumEnum m_enum;
	};
}
