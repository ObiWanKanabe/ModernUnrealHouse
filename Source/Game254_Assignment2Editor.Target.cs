// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Game254_Assignment2EditorTarget : TargetRules
{
	public Game254_Assignment2EditorTarget(TargetInfo Target) : base (Target)
	{
		Type = TargetType.Editor;
        ExtraModuleNames.Add("Game254_Assignment2");
	}
}
