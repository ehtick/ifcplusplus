/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcTextDecoration.h"

// TYPE IfcTextDecoration = STRING;
IFC4X3::IfcTextDecoration::IfcTextDecoration( std::string value ) { m_value = value; }
void IFC4X3::IfcTextDecoration::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCTEXTDECORATION("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcTextDecoration> IFC4X3::IfcTextDecoration::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcTextDecoration>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTextDecoration>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcTextDecoration>(); }
	shared_ptr<IfcTextDecoration> type_object( new IfcTextDecoration() );
	readString( arg, type_object->m_value );
	return type_object;
}
