/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADBackground.h"


@class NSArray, OADFill;



__attribute__((visibility("hidden")))

@interface OADBackgroundProperties : OADBackground

{

    OADFill *mFill;

    NSArray *mEffects;

}



- (void)dealloc;

- (id)effects;

- (id)fill;

- (_Bool)isEqual:(id)arg1;

- (void)setEffects:(id)arg1;

- (void)setFill:(id)arg1;



@end

