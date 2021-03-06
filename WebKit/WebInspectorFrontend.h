/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface WebInspectorFrontend : NSObject

{

    struct WebInspectorFrontendClient *m_frontendClient;

}



- (void)attach;

- (void)detach;

- (id)initWithFrontendClient:(struct WebInspectorFrontendClient *)arg1;

- (_Bool)isDebuggingEnabled;

- (_Bool)isProfilingJavaScript;

- (_Bool)isTimelineProfilingEnabled;

- (void)setDebuggingEnabled:(_Bool)arg1;

- (void)setTimelineProfilingEnabled:(_Bool)arg1;

- (void)showConsole;

- (void)startProfilingJavaScript;

- (void)stopProfilingJavaScript;



@end


