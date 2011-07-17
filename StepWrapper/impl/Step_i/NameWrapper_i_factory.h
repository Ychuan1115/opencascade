////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// ������: "w:/CAD/StepWrapper/impl/Step_i/NameWrapper_i_factory.h"
// ��������� ������������ ������ ��� ������ ����������� (.h)
// Generated from UML model, root element: <<Servant::Class>> CAD::StepWrapper::Step_i::NameWrapper_i
// �������� ���������� ������ ��������� NameWrapper ��� �������� NameWrapper_i
//
//
// ��� ����� ����������� ��� ��� "������-������".
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef __CAD_STEPWRAPPER_STEP_I_NAMEWRAPPER_I_FCTR_H__
#define __CAD_STEPWRAPPER_STEP_I_NAMEWRAPPER_I_FCTR_H__

#include "shared/Core/sys/std_inc.h"
#include "CAD/StepWrapper/Step/StepFactories.h"

namespace StepWrapper {
namespace Step_i {

/// Interface-factory implementation for NameWrapper_i
class NameWrapper_i_factory:
	virtual public ::Core::RefCountObjectBase
	, virtual public Step::NameWrapperAbstractFactory
{
public:
	NameWrapper_i_factory ();

	void registrate_me (Core::Root::FactoryPriority priority) /*throw (Core::Root::DuplicatedFactoryKey)*/;

protected:
	const char* key () const;

	Step::NameWrapper* make (const char* data);

};

typedef ::Core::Var<NameWrapper_i_factory> NameWrapper_i_factory_var;

} // namespace Step_i
} // namespace StepWrapper


#endif //__CAD_STEPWRAPPER_STEP_I_NAMEWRAPPER_I_FCTR_H__
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

