/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class UIWindow;



@interface DDFallbackController : UIViewController 
{
    UIWindow *_baseWindow;
    UIWindow *_ourWindow;
    id _interactionDelegate;
    NSInteger _startOrientation;
}


- (void)removeChildViewController:(id)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)presentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2;

@end