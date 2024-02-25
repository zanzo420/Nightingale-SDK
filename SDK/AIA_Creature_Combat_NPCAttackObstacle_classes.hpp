#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x16C - 0x16C)
// BlueprintGeneratedClass AIA_Creature_Combat_NPCAttackObstacle.AIA_Creature_Combat_NPCAttackObstacle_C
class UAIA_Creature_Combat_NPCAttackObstacle_C : public UAIA_Creature_Combat_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_NPCAttackObstacle_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetParentClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	float GetNormalizedScore(class AActor* Target);
	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CheckOwnerRequirements_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
};

}


