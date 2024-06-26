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
	// TYPE IfcEventTypeEnum = ENUMERATION OF	(ENDEVENT	,INTERMEDIATEEVENT	,STARTEVENT	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcEventTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcEventTypeEnumEnum
		{
			ENUM_ENDEVENT,
			ENUM_INTERMEDIATEEVENT,
			ENUM_STARTEVENT,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcEventTypeEnum() = default;
		IfcEventTypeEnum( IfcEventTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1401066283; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcEventTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcEventTypeEnumEnum m_enum;
	};
}
