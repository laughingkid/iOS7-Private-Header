/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSABaseApplicationDelegate;



__attribute__((visibility("hidden")))

@interface TSAServerApplicationDelegate : NSObject

{

    TSABaseApplicationDelegate *_baseApplicationDelegate;

}



+ (id)sharedDelegate;

@property(retain, nonatomic) TSABaseApplicationDelegate *baseApplicationDelegate; // @synthesize baseApplicationDelegate=_baseApplicationDelegate;

- (id)init;

- (id)initWithBaseApplicationDelegate:(id)arg1;



@end

