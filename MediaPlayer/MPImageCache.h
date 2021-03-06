/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MPImageRequestDelegate.h"



@class CPLRUDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue;



@interface MPImageCache : NSObject <MPImageRequestDelegate>

{

    CPLRUDictionary *_cachedImages;

    NSObject<OS_dispatch_queue> *_cachedImagesQueue;

    unsigned long long _cacheSize;

    id <MPImageCacheDelegate> _delegate;

    NSOperationQueue *_operationQueue;

    long long _resumeToForegroundCacheSize;

    long long _suspendToBackgroundCacheSize;

    id _idleEventHandler;

    id _libraryDisplayValueChangeObserver;

}



- (void).cxx_destruct;

- (void)_cacheImage:(id)arg1 forKey:(id)arg2;

- (id)_cachedImageForKey:(id)arg1;

- (void)_didEnterBackgroundNotification:(id)arg1;

- (void)_didReceiveMemoryWarningNotification:(id)arg1;

- (void)_enqueueRequest:(id)arg1;

- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)arg1;

- (void)_removeCachedImageForKey:(id)arg1;

- (void)_willEnterForegroundNotification:(id)arg1;

- (void)_zapCache;

- (void)_zapCachedPlaceholders;

@property(nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;

- (id)cachedImageForRequest:(id)arg1;

- (void)cancelAllImageRequests;

- (void)dealloc;

- (id)debugDescription;

@property(nonatomic) __weak id <MPImageCacheDelegate> delegate; // @synthesize delegate=_delegate;

@property(copy, nonatomic) id idleEventHandler; // @synthesize idleEventHandler=_idleEventHandler;

- (id)imageForRequest:(id)arg1 error:(id *)arg2;

- (void)imageRequest:(id)arg1 failedWithError:(id)arg2;

- (void)imageRequest:(id)arg1 loadedImage:(id)arg2;

@property(nonatomic) _Bool imageRequestsSuspended;

- (id)init;

@property(readonly, nonatomic) _Bool isIdle;

@property(nonatomic) __weak id libraryDisplayValueChangeObserver; // @synthesize libraryDisplayValueChangeObserver=_libraryDisplayValueChangeObserver;

- (void)loadImageForRequest:(id)arg1 asynchronously:(_Bool)arg2 completionHandler:(id)arg3;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (void)setCacheSize:(unsigned long long)arg1 preserveExisting:(_Bool)arg2;



@end


