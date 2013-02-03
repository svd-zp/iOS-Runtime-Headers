/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKMarkGameRecommendationsAsViewedDataRequest : GKDataRequest {
    NSArray *_recommendations;
    BOOL _viewed;
}

@property(retain) NSArray * recommendations;
@property BOOL viewed;

- (void)dealloc;
- (id)key;
- (id)recommendations;
- (id)request;
- (void)setRecommendations:(id)arg1;
- (void)setViewed:(BOOL)arg1;
- (BOOL)viewed;

@end