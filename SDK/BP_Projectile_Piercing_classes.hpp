#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0xCC8 - 0xCB2)
// BlueprintGeneratedClass BP_Projectile_Piercing.BP_Projectile_Piercing_C
class ABP_Projectile_Piercing_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_A7F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PassthroughAbility;                                // 0xCB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        PassthroughCounter;                                // 0xCC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        MaxPassthroughCount;                               // 0xCC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Projectile_Piercing_C* GetDefaultObj();

	void RegisterPassthrough(bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable);
	void GrantProjectileAbilities(bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue);
	void GetPassthroughCount(int32* PassthroughCount);
	void HandleMaxPassthroughCount();
	void HandlePassthrough();
	void ValidatePassthrough(bool* ValidPassthrough);
	void ValidateImpactDetection(bool* ValidTraceImpact, bool CallFunc_ValidateImpactDetection_ValidTraceImpact);
	void HandleImpactDetected(bool CallFunc_ValidatePassthrough_ValidPassthrough);
};

}


