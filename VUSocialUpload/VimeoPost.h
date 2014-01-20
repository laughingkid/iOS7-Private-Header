/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ACAccount, ALAsset, ALAssetsLibrary, NSArray, NSData, NSString, NSURL;



@interface VimeoPost : NSObject

{

    NSURL *_baseURL;

    int _uploadState;

    NSString *_videoID;

    NSString *_ticketID;

    NSURL *_uploadEndpoint;

    _Bool _continuingUpload;

    unsigned long long _lastByteStored;

    int _retryCount;

    _Bool _canUploadOverCellular;

    ALAssetsLibrary *_assetsLibrary;

    id <VimeoPostDelegate> _delegate;

    NSURL *_assetURL;

    NSData *_assetData;

    NSString *_title;

    NSString *_description;

    NSArray *_tags;

    unsigned long long _accessType;

    long long _videoSize;

    long long _privacySettings;

    ACAccount *_account;

    ALAsset *_asset;

    NSURL *_exportedVideoURL;

}



+ (_Bool)_isUsingCellular;

+ (id)dictionaryWithResponseData:(id)arg1 error:(id *)arg2;

+ (void)getAvailableQuotaForAccount:(id)arg1 completion:(id)arg2;

- (void)_checkQuota;

- (void)_cleanup;

- (void)_commit;

- (void)_errorWithCode:(int)arg1;

- (void)_getTicket;

- (void)_setDescription;

- (void)_setPrivacy;

- (void)_setTags;

- (void)_setTitle;

- (id)_tags;

- (void)_uploadData;

- (void)_verify;

- (void)_warningWithCode:(int)arg1;

@property(nonatomic) unsigned long long accessType; // @synthesize accessType=_accessType;

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;

@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;

@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;

@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;

- (id)assetsLibrary;

- (void)dealloc;

@property(nonatomic) id <VimeoPostDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) NSString *description; // @synthesize description=_description;

@property(retain, nonatomic) NSURL *exportedVideoURL; // @synthesize exportedVideoURL=_exportedVideoURL;

- (id)init;

- (id)initWithDictionary:(id)arg1;

- (unsigned long long)postSize;

@property(nonatomic) long long privacySettings; // @synthesize privacySettings=_privacySettings;

- (id)serializedDictionary;

@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@property(nonatomic) long long videoSize; // @synthesize videoSize=_videoSize;

- (void)uploadToAccount:(id)arg1;



@end

