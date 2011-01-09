/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIViewController, NSString;



@interface UIViewControllerAction : NSObject 
{
    UIViewController *_viewController;
    NSString *_name;
    BOOL _animated;
}

@property BOOL animated;
@property(retain) NSString *name;
@property UIViewController *viewController;


- (BOOL)animated;
- (void)setViewController:(id)arg1;
- (void)setName:(id)arg1;
- (id)initWithViewController:(id)arg1 name:(id)arg2 animated:(BOOL)arg3;
- (void)setAnimated:(BOOL)arg1;
- (id)viewController;
- (id)name;
- (void)dealloc;

@end