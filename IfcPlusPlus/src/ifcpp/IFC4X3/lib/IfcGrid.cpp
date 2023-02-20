/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcGrid.h"
#include "ifcpp/IFC4X3/include/IfcGridAxis.h"
#include "ifcpp/IFC4X3/include/IfcGridTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelContainedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRelPositions.h"
#include "ifcpp/IFC4X3/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcGrid 
IFC4X3::IfcGrid::IfcGrid( int tag ) { m_tag = tag; }
void IFC4X3::IfcGrid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCGRID" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_UAxes );
	stream << ",";
	writeEntityList( stream, m_VAxes );
	stream << ",";
	writeEntityList( stream, m_WAxes );
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcGrid::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcGrid::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcGrid, expecting 11, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );
	readEntityReference( args[5], m_ObjectPlacement, map, errorStream );
	readEntityReference( args[6], m_Representation, map, errorStream );
	readEntityReferenceList( args[7], m_UAxes, map, errorStream );
	readEntityReferenceList( args[8], m_VAxes, map, errorStream );
	readEntityReferenceList( args[9], m_WAxes, map, errorStream );
	m_PredefinedType = IfcGridTypeEnum::createObjectFromSTEP( args[10], map, errorStream );
}
void IFC4X3::IfcGrid::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPositioningElement::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> UAxes_vec_object( new AttributeObjectVector() );
	std::copy( m_UAxes.begin(), m_UAxes.end(), std::back_inserter( UAxes_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "UAxes", UAxes_vec_object ) );
	shared_ptr<AttributeObjectVector> VAxes_vec_object( new AttributeObjectVector() );
	std::copy( m_VAxes.begin(), m_VAxes.end(), std::back_inserter( VAxes_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "VAxes", VAxes_vec_object ) );
	shared_ptr<AttributeObjectVector> WAxes_vec_object( new AttributeObjectVector() );
	std::copy( m_WAxes.begin(), m_WAxes.end(), std::back_inserter( WAxes_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "WAxes", WAxes_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
}
void IFC4X3::IfcGrid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPositioningElement::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcGrid::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPositioningElement::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcGrid> ptr_self = dynamic_pointer_cast<IfcGrid>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcGrid::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_UAxes.size(); ++i )
	{
		if( m_UAxes[i] )
		{
			m_UAxes[i]->m_PartOfU_inverse.emplace_back( ptr_self );
		}
	}
	for( size_t i=0; i<m_VAxes.size(); ++i )
	{
		if( m_VAxes[i] )
		{
			m_VAxes[i]->m_PartOfV_inverse.emplace_back( ptr_self );
		}
	}
	for( size_t i=0; i<m_WAxes.size(); ++i )
	{
		if( m_WAxes[i] )
		{
			m_WAxes[i]->m_PartOfW_inverse.emplace_back( ptr_self );
		}
	}
}
void IFC4X3::IfcGrid::unlinkFromInverseCounterparts()
{
	IfcPositioningElement::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_UAxes.size(); ++i )
	{
		if( m_UAxes[i] )
		{
			std::vector<weak_ptr<IfcGrid> >& PartOfU_inverse = m_UAxes[i]->m_PartOfU_inverse;
			for( auto it_PartOfU_inverse = PartOfU_inverse.begin(); it_PartOfU_inverse != PartOfU_inverse.end(); )
			{
				weak_ptr<IfcGrid> self_candidate_weak = *it_PartOfU_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_PartOfU_inverse;
					continue;
				}
				shared_ptr<IfcGrid> self_candidate( *it_PartOfU_inverse );
				if( self_candidate.get() == this )
				{
					it_PartOfU_inverse= PartOfU_inverse.erase( it_PartOfU_inverse );
				}
				else
				{
					++it_PartOfU_inverse;
				}
			}
		}
	}
	for( size_t i=0; i<m_VAxes.size(); ++i )
	{
		if( m_VAxes[i] )
		{
			std::vector<weak_ptr<IfcGrid> >& PartOfV_inverse = m_VAxes[i]->m_PartOfV_inverse;
			for( auto it_PartOfV_inverse = PartOfV_inverse.begin(); it_PartOfV_inverse != PartOfV_inverse.end(); )
			{
				weak_ptr<IfcGrid> self_candidate_weak = *it_PartOfV_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_PartOfV_inverse;
					continue;
				}
				shared_ptr<IfcGrid> self_candidate( *it_PartOfV_inverse );
				if( self_candidate.get() == this )
				{
					it_PartOfV_inverse= PartOfV_inverse.erase( it_PartOfV_inverse );
				}
				else
				{
					++it_PartOfV_inverse;
				}
			}
		}
	}
	for( size_t i=0; i<m_WAxes.size(); ++i )
	{
		if( m_WAxes[i] )
		{
			std::vector<weak_ptr<IfcGrid> >& PartOfW_inverse = m_WAxes[i]->m_PartOfW_inverse;
			for( auto it_PartOfW_inverse = PartOfW_inverse.begin(); it_PartOfW_inverse != PartOfW_inverse.end(); )
			{
				weak_ptr<IfcGrid> self_candidate_weak = *it_PartOfW_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_PartOfW_inverse;
					continue;
				}
				shared_ptr<IfcGrid> self_candidate( *it_PartOfW_inverse );
				if( self_candidate.get() == this )
				{
					it_PartOfW_inverse= PartOfW_inverse.erase( it_PartOfW_inverse );
				}
				else
				{
					++it_PartOfW_inverse;
				}
			}
		}
	}
}