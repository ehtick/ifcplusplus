/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcSegmentIndexSelect.h"
#include "ifcpp/IFC4X3/include/IfcLineIndex.h"

// TYPE IfcLineIndex = LIST [2:?] OF IfcPositiveInteger;
void IFC4X3::IfcLineIndex::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCLINEINDEX("; }
	writeTypeOfIntList( stream, m_vec, false );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcLineIndex> IFC4X3::IfcLineIndex::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcLineIndex>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcLineIndex>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcLineIndex>(); }
	shared_ptr<IfcLineIndex> type_object( new IfcLineIndex() );
	readTypeOfIntegerList( arg, type_object->m_vec );
	return type_object;
}
