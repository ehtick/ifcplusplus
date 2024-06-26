/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcSegmentIndexSelect.h"
#include "ifcpp/IFC4X3/include/IfcArcIndex.h"

// TYPE IfcArcIndex = LIST [3:3] OF IfcPositiveInteger;
void IFC4X3::IfcArcIndex::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCARCINDEX("; }
	writeTypeOfIntList( stream, m_vec, false );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcArcIndex> IFC4X3::IfcArcIndex::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcArcIndex>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcArcIndex>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcArcIndex>(); }
	shared_ptr<IfcArcIndex> type_object( new IfcArcIndex() );
	readTypeOfIntegerList( arg, type_object->m_vec );
	return type_object;
}
