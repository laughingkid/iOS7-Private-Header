/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


@class NSArray, NSNumber, NSString;



@interface SAAssistantLoaded : SABaseClientBoundCommand

{

}



+ (id)assistantLoaded;

+ (id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSString *dataAnchor;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSNumber *requestSync;

- (_Bool)requiresResponse;

@property(copy, nonatomic) NSArray *syncAnchors;

@property(copy, nonatomic) NSString *version;



@end

