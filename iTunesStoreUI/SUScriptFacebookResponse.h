/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class NSString, SUScriptError;



@interface SUScriptFacebookResponse : SUScriptObject

{

    NSString *_bodyData;

    SUScriptError *_error;

    long long _statusCode;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

@property(readonly) long long HTTPStatusCode;

- (id)_className;

- (id)attributeKeys;

@property(readonly) NSString *bodyData;

- (void)dealloc;

@property(readonly) SUScriptError *error;

- (id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3;

- (id)scriptAttributeKeys;



@end


