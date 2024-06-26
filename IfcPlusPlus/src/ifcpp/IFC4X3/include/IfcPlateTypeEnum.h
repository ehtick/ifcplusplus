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
	// TYPE IfcPlateTypeEnum = ENUMERATION OF	(BASE_PLATE	,COVER_PLATE	,CURTAIN_PANEL	,FLANGE_PLATE	,GUSSET_PLATE	,SHEET	,SPLICE_PLATE	,STIFFENER_PLATE	,WEB_PLATE	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcPlateTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcPlateTypeEnumEnum
		{
			ENUM_BASE_PLATE,
			ENUM_COVER_PLATE,
			ENUM_CURTAIN_PANEL,
			ENUM_FLANGE_PLATE,
			ENUM_GUSSET_PLATE,
			ENUM_SHEET,
			ENUM_SPLICE_PLATE,
			ENUM_STIFFENER_PLATE,
			ENUM_WEB_PLATE,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcPlateTypeEnum() = default;
		IfcPlateTypeEnum( IfcPlateTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 661370862; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcPlateTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcPlateTypeEnumEnum m_enum;
	};
}
