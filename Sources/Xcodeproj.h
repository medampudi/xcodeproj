//
//  Xcodeproj.h
//  xcodeproj
//
//  Created by Cédric Luthi on 07.02.11.
//  Copyright Cédric Luthi 2011. All rights reserved.
//

#import "DDCommandLineInterface.h"

#import <DevToolsCore/DevToolsCore.h>

@interface Xcodeproj : NSObject <DDCliApplicationDelegate>
{
	// Options
	id<PBXProject> project;
	NSString *targetName;
	BOOL help;
	
	id<PBXTarget> target;
}

- (void) addGroupNamed:(NSString *)groupName beforeGroupNamed:(NSString *)otherGroupName;
- (void) addGroupNamed:(NSString *)groupName inGroupNamed:(NSString *)otherGroupName;
- (id<PBXFileReference>) addFileAtPath:(NSString *)filePath;
- (BOOL) addFileReference:(id<PBXFileReference>)fileReference inGroupNamed:(NSString *)groupName;
- (BOOL) addFileReference:(id<PBXFileReference>)fileReference toBuildPhase:(NSString *)buildPhaseName;

@end
