/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, TSTMasterLayout;



__attribute__((visibility("hidden")))

@interface TSTLayoutTask : NSObject

{

    TSTMasterLayout *mMasterLayout;

    NSMutableArray *mCellStatesToLayout;

}



@property(retain, nonatomic) NSMutableArray *cellStatesToLayout; // @synthesize cellStatesToLayout=mCellStatesToLayout;

- (void)dealloc;

- (void)flushToGlobalCaches;

- (id)initWithMasterLayout:(id)arg1;



@end


