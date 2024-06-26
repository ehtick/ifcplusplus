/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcMonetaryUnit.h"

// ENTITY IfcMonetaryUnit 
IFC4X3::IfcMonetaryUnit::IfcMonetaryUnit( int tag ) { m_tag = tag; }
void IFC4X3::IfcMonetaryUnit::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCMONETARYUNIT" << "(";
	if( m_Currency ) { m_Currency->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcMonetaryUnit::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcMonetaryUnit::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Currency = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcMonetaryUnit, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcMonetaryUnit::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Currency", m_Currency ) );
}
void IFC4X3::IfcMonetaryUnit::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcMonetaryUnit::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcMonetaryUnit::unlinkFromInverseCounterparts()
{
}
