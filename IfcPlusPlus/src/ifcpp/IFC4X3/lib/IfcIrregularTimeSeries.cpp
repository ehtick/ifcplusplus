/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcDataOriginEnum.h"
#include "ifcpp/IFC4X3/include/IfcDateTime.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcIrregularTimeSeries.h"
#include "ifcpp/IFC4X3/include/IfcIrregularTimeSeriesValue.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcTimeSeriesDataTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcUnit.h"

// ENTITY IfcIrregularTimeSeries 
IFC4X3::IfcIrregularTimeSeries::IfcIrregularTimeSeries( int tag ) { m_tag = tag; }
void IFC4X3::IfcIrregularTimeSeries::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCIRREGULARTIMESERIES" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_StartTime ) { m_StartTime->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_EndTime ) { m_EndTime->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_TimeSeriesDataType ) { m_TimeSeriesDataType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_DataOrigin ) { m_DataOrigin->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedDataOrigin ) { m_UserDefinedDataOrigin->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Unit ) { m_Unit->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	writeEntityList( stream, m_Values );
	stream << ");";
}
void IFC4X3::IfcIrregularTimeSeries::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcIrregularTimeSeries::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_StartTime = IfcDateTime::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_EndTime = IfcDateTime::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){m_DataOrigin = IfcDataOriginEnum::createObjectFromSTEP( args[5], map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){m_UserDefinedDataOrigin = IfcLabel::createObjectFromSTEP( args[6], map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){m_Unit = IfcUnit::createObjectFromSTEP( args[7], map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){readEntityReferenceList( args[8], m_Values, map, errorStream, entityIdNotFound );}
	if( num_args != 9 ){ errorStream << "Wrong parameter count for entity IfcIrregularTimeSeries, expecting 9, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcIrregularTimeSeries::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcTimeSeries::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> Values_vec_object( new AttributeObjectVector() );
	std::copy( m_Values.begin(), m_Values.end(), std::back_inserter( Values_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Values", Values_vec_object ) );
}
void IFC4X3::IfcIrregularTimeSeries::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcTimeSeries::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcIrregularTimeSeries::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTimeSeries::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcIrregularTimeSeries::unlinkFromInverseCounterparts()
{
	IfcTimeSeries::unlinkFromInverseCounterparts();
}
