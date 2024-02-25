#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x16C - 0x16C)
// BlueprintGeneratedClass AIA_Creature_Harpy_NightMoveCloser.AIA_Creature_Harpy_NightMoveCloser_C
class UAIA_Creature_Harpy_NightMoveCloser_C : public UAIA_Creature_Combat_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Harpy_NightMoveCloser_C* GetDefaultObj();

	bool CheckOwnerRequirements(bool CallFunc_CheckOwnerRequirements_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	float GetNormalizedScore(class AActor* Target);
	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


