/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCompositeCurveOnSurface.h"
namespace IFC4X3
{
	//ENTITY
	class IFCQUERY_EXPORT IfcBoundaryCurve : public IfcCompositeCurveOnSurface
	{
	public:
		IfcBoundaryCurve() = default;
		IfcBoundaryCurve( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 2; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1136057603; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcCurve -----------------------------------------------------------

		// IfcBoundedCurve -----------------------------------------------------------

		// IfcCompositeCurve -----------------------------------------------------------
		// attributes:
		//  std::vector<shared_ptr<IfcSegment> >					m_Segments;
		//  shared_ptr<IfcLogical>									m_SelfIntersect;

		// IfcCompositeCurveOnSurface -----------------------------------------------------------

		// IfcBoundaryCurve -----------------------------------------------------------
	};
}