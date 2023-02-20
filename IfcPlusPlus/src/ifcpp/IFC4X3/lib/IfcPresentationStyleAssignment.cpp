/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcPresentationStyle.h"
#include "ifcpp/IFC4X3/include/IfcPresentationStyleAssignment.h"

// ENTITY IfcPresentationStyleAssignment 
IFC4X3::IfcPresentationStyleAssignment::IfcPresentationStyleAssignment( int tag ) { m_tag = tag; }
void IFC4X3::IfcPresentationStyleAssignment::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCPRESENTATIONSTYLEASSIGNMENT" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Styles );
	stream << ");";
}
void IFC4X3::IfcPresentationStyleAssignment::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPresentationStyleAssignment::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPresentationStyleAssignment, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReferenceList( args[1], m_Styles, map, errorStream );
}
void IFC4X3::IfcPresentationStyleAssignment::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPresentationStyle::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> Styles_vec_object( new AttributeObjectVector() );
	std::copy( m_Styles.begin(), m_Styles.end(), std::back_inserter( Styles_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Styles", Styles_vec_object ) );
}
void IFC4X3::IfcPresentationStyleAssignment::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPresentationStyle::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPresentationStyleAssignment::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationStyle::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcPresentationStyleAssignment::unlinkFromInverseCounterparts()
{
	IfcPresentationStyle::unlinkFromInverseCounterparts();
}