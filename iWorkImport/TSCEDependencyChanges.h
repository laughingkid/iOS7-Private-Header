/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSCEDependencyChanges : NSObject

{

    struct __CFUUID *mTableID;

}



- (void)dealloc;

- (id)initWithTableID:(struct __CFUUID *)arg1;

- (_Bool)mightAffectDependencyTracker;

- (struct __CFUUID *)tableID;



@end


