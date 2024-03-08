#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass BTD_CanCompanionTeleport.BTD_CanCompanionTeleport_C
class UBTD_CanCompanionTeleport_C : public UBTDecorator_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UBTD_CanCompanionTeleport_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class UAICompanionComponent* LCompanionComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanCompanionTeleport_ReturnValue, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


