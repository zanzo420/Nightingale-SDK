#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x178 - 0x178)
// BlueprintGeneratedClass AIA_Creature_Combat_CasterMiasma_POITargets.AIA_Creature_Combat_CasterMiasma_POITargets_C
class UAIA_Creature_Combat_CasterMiasma_POITargets_C : public UAIA_Creature_Combat_CasterMiasma_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_CasterMiasma_POITargets_C* GetDefaultObj();

	bool CheckOwnerRequirements(double MinPlayerRange, const struct FGameplayTag& Temp_struct_Variable, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
};

}


