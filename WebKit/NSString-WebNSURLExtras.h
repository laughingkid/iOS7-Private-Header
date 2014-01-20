/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (WebNSURLExtras)

- (id)_web_decodeHostName;

- (id)_web_decodeHostNameWithRange:(struct _NSRange)arg1;

- (id)_web_encodeHostName;

- (id)_web_encodeHostNameWithRange:(struct _NSRange)arg1;

- (_Bool)_web_hostNameNeedsDecodingWithRange:(struct _NSRange)arg1;

- (_Bool)_web_hostNameNeedsEncodingWithRange:(struct _NSRange)arg1;

- (_Bool)_web_isUserVisibleURL;

- (id)_webkit_URLFragment;

- (_Bool)_webkit_isFTPDirectoryURL;

- (_Bool)_webkit_isFileURL;

- (_Bool)_webkit_isJavaScriptURL;

- (_Bool)_webkit_looksLikeAbsoluteURL;

- (id)_webkit_queryKeysAndValues;

- (struct _NSRange)_webkit_rangeOfURLScheme;

- (id)_webkit_scriptIfJavaScriptURL;

- (id)_webkit_stringByReplacingValidPercentEscapes;

- (id)_webkit_unescapedQueryValue;

@end

