////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// ������: "w:/CAD/StepWrapper/impl/Step_i/NameWrapper_i_factory.cpp"
// ��������� ������ ���������� ��� ������ ����������� (.cpp)
// Generated from UML model, root element: <<Servant::Class>> CAD::StepWrapper::Step_i::NameWrapper_i
//
//
// ��� ����� ����������� ��� ��� "������-������".
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "shared/Core/sys/std_inc.h"
#include "CAD/StepWrapper/impl/Step_i/NameWrapper_i_factory.h"
#include "CAD/StepWrapper/impl/Step_i/NameWrapper_i.h"

namespace StepWrapper {
namespace Step_i {

NameWrapper_i_factory::NameWrapper_i_factory () {
}

void NameWrapper_i_factory::registrate_me (
	Core::Root::FactoryPriority priority
) /*throw (
	Core::Root::DuplicatedFactoryKey
)*/ {
	Step::NameWrapperFactoryManager::register_factory (this, priority);
}

const char* NameWrapper_i_factory::key () const {
	return "NameWrapper_i";
}

Step::NameWrapper* NameWrapper_i_factory::make (const char* data) {
	NameWrapper_i_var ret = new NameWrapper_i (data);
	return ret._retn ();
}

} // namespace Step_i
} // namespace StepWrapper

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

