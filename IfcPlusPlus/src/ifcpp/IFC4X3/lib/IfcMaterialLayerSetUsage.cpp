/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcDirectionSenseEnum.h"
#include "ifcpp/IFC4X3/include/IfcLayerSetDirectionEnum.h"
#include "ifcpp/IFC4X3/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMaterialLayerSet.h"
#include "ifcpp/IFC4X3/include/IfcMaterialLayerSetUsage.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesMaterial.h"

// ENTITY IfcMaterialLayerSetUsage 
IFC4X3::IfcMaterialLayerSetUsage::IfcMaterialLayerSetUsage( int tag ) { m_tag = tag; }
void IFC4X3::IfcMaterialLayerSetUsage::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCMATERIALLAYERSETUSAGE" << "(";
	if( m_ForLayerSet ) { stream << "#" << m_ForLayerSet->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_LayerSetDirection ) { m_LayerSetDirection->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_DirectionSense ) { m_DirectionSense->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OffsetFromReferenceLine ) { m_OffsetFromReferenceLine->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ReferenceExtent ) { m_ReferenceExtent->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcMaterialLayerSetUsage::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcMaterialLayerSetUsage::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_ForLayerSet, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_LayerSetDirection = IfcLayerSetDirectionEnum::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_DirectionSense = IfcDirectionSenseEnum::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_OffsetFromReferenceLine = IfcLengthMeasure::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_ReferenceExtent = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args != 5 ){ errorStream << "Wrong parameter count for entity IfcMaterialLayerSetUsage, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcMaterialLayerSetUsage::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcMaterialUsageDefinition::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ForLayerSet", m_ForLayerSet ) );
	vec_attributes.emplace_back( std::make_pair( "LayerSetDirection", m_LayerSetDirection ) );
	vec_attributes.emplace_back( std::make_pair( "DirectionSense", m_DirectionSense ) );
	vec_attributes.emplace_back( std::make_pair( "OffsetFromReferenceLine", m_OffsetFromReferenceLine ) );
	vec_attributes.emplace_back( std::make_pair( "ReferenceExtent", m_ReferenceExtent ) );
}
void IFC4X3::IfcMaterialLayerSetUsage::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcMaterialUsageDefinition::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcMaterialLayerSetUsage::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcMaterialUsageDefinition::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcMaterialLayerSetUsage::unlinkFromInverseCounterparts()
{
	IfcMaterialUsageDefinition::unlinkFromInverseCounterparts();
}
