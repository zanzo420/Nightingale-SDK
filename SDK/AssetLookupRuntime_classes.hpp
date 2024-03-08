#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// Class AssetLookupRuntime.UniquelyIdentifiableDataAsset
class UUniquelyIdentifiableDataAsset : public UDataAsset
{
public:
	uint8                                        Pad_15E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 UniqueID;                                          // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUniquelyIdentifiableDataAsset* GetDefaultObj();

	struct FGuid GetUID();
};

// 0x68 (0x90 - 0x28)
// Class AssetLookupRuntime.AssetLookupFake
class UAssetLookupFake : public UObject
{
public:
	uint8                                        Pad_15F[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAssetLookupFake* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AssetLookupRuntime.AssetLookupInterface
class IAssetLookupInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAssetLookupInterface* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class AssetLookupRuntime.AssetLookupSubSystem
class UAssetLookupSubSystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_160[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAssetLookupSubSystem* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AssetLookupRuntime.UniquelyIdentifiableAsset
class UUniquelyIdentifiableAsset : public UObject
{
public:
	uint8                                        Pad_161[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 UniqueID;                                          // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUniquelyIdentifiableAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AssetLookupRuntime.UniquelyIdentifiableInterface
class IUniquelyIdentifiableInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUniquelyIdentifiableInterface* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class AssetLookupRuntime.UniquelyIdentifiablePrimaryDataAsset
class UUniquelyIdentifiablePrimaryDataAsset : public UPrimaryDataAsset
{
public:
	uint8                                        Pad_162[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 UniqueID;                                          // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUniquelyIdentifiablePrimaryDataAsset* GetDefaultObj();

};

}


