/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface SLFacebookGraphUtils : NSObject

{

}



+ (id)_likeQueryStringForURL:(id)arg1 flags:(unsigned long long)arg2;

+ (void)_likeURL:(id)arg1 requestMethod:(long long)arg2 account:(id)arg3 completion:(id)arg4;

+ (id)_parseServerResponse:(id)arg1 error:(id *)arg2;

+ (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 account:(id)arg3 completion:(id)arg4;

+ (void)likeURL:(id)arg1 account:(id)arg2 completion:(id)arg3;

+ (void)unlikeURL:(id)arg1 account:(id)arg2 completion:(id)arg3;



@end


