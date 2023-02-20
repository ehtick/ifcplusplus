/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcMagneticFluxDensityMeasure.h"

// TYPE IfcMagneticFluxDensityMeasure = REAL;
IFC4X3::IfcMagneticFluxDensityMeasure::IfcMagneticFluxDensityMeasure( double value ) { m_value = value; }
void IFC4X3::IfcMagneticFluxDensityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMAGNETICFLUXDENSITYMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcMagneticFluxDensityMeasure> IFC4X3::IfcMagneticFluxDensityMeasure::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcMagneticFluxDensityMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcMagneticFluxDensityMeasure>(); }
	shared_ptr<IfcMagneticFluxDensityMeasure> type_object( new IfcMagneticFluxDensityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}