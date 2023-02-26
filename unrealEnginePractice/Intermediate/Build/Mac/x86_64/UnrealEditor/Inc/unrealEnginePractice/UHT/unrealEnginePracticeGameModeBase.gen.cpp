// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unrealEnginePractice/unrealEnginePracticeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeunrealEnginePracticeGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALENGINEPRACTICE_API UClass* Z_Construct_UClass_AunrealEnginePracticeGameModeBase();
	UNREALENGINEPRACTICE_API UClass* Z_Construct_UClass_AunrealEnginePracticeGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_unrealEnginePractice();
// End Cross Module References
	void AunrealEnginePracticeGameModeBase::StaticRegisterNativesAunrealEnginePracticeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AunrealEnginePracticeGameModeBase);
	UClass* Z_Construct_UClass_AunrealEnginePracticeGameModeBase_NoRegister()
	{
		return AunrealEnginePracticeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AunrealEnginePracticeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AunrealEnginePracticeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_unrealEnginePractice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AunrealEnginePracticeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "unrealEnginePracticeGameModeBase.h" },
		{ "ModuleRelativePath", "unrealEnginePracticeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AunrealEnginePracticeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AunrealEnginePracticeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AunrealEnginePracticeGameModeBase_Statics::ClassParams = {
		&AunrealEnginePracticeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AunrealEnginePracticeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AunrealEnginePracticeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AunrealEnginePracticeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AunrealEnginePracticeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AunrealEnginePracticeGameModeBase.OuterSingleton, Z_Construct_UClass_AunrealEnginePracticeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AunrealEnginePracticeGameModeBase.OuterSingleton;
	}
	template<> UNREALENGINEPRACTICE_API UClass* StaticClass<AunrealEnginePracticeGameModeBase>()
	{
		return AunrealEnginePracticeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AunrealEnginePracticeGameModeBase);
	AunrealEnginePracticeGameModeBase::~AunrealEnginePracticeGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_jamiemccarthy_Documents_Game_Dev_Stuf_Unreal_Engine_unrealEnginePractice_unrealEnginePractice_Source_unrealEnginePractice_unrealEnginePracticeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jamiemccarthy_Documents_Game_Dev_Stuf_Unreal_Engine_unrealEnginePractice_unrealEnginePractice_Source_unrealEnginePractice_unrealEnginePracticeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AunrealEnginePracticeGameModeBase, AunrealEnginePracticeGameModeBase::StaticClass, TEXT("AunrealEnginePracticeGameModeBase"), &Z_Registration_Info_UClass_AunrealEnginePracticeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AunrealEnginePracticeGameModeBase), 3526477890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jamiemccarthy_Documents_Game_Dev_Stuf_Unreal_Engine_unrealEnginePractice_unrealEnginePractice_Source_unrealEnginePractice_unrealEnginePracticeGameModeBase_h_3066168701(TEXT("/Script/unrealEnginePractice"),
		Z_CompiledInDeferFile_FID_jamiemccarthy_Documents_Game_Dev_Stuf_Unreal_Engine_unrealEnginePractice_unrealEnginePractice_Source_unrealEnginePractice_unrealEnginePracticeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jamiemccarthy_Documents_Game_Dev_Stuf_Unreal_Engine_unrealEnginePractice_unrealEnginePractice_Source_unrealEnginePractice_unrealEnginePracticeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
