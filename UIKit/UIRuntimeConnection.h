/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface UIRuntimeConnection : NSObject <NSCoding>

{

    id source;

    id destination;

    NSString *label;

}



- (void)connect;

- (void)connectForSimulator;

- (void)dealloc;

- (id)destination;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)label;

- (void)setDestination:(id)arg1;

- (void)setLabel:(id)arg1;

- (void)setSource:(id)arg1;

- (id)source;



@end


