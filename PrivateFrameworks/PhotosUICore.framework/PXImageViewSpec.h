/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImageViewSpec : PXViewSpec {
    NSArray * _overlaySpecs;
    int  _roundedCornersMode;
    BOOL  _shouldEnableFocus;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } floatingContentMotionRotation;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } floatingContentMotionTranslation;
@property (nonatomic, readonly) float floatingShadowOpacity;
@property (nonatomic, readonly) float floatingShadowRadius;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } floatingUnfocusedShadowExpansion;
@property (nonatomic, readonly) float floatingUnfocusedShadowOpacity;
@property (nonatomic, readonly) float floatingUnfocusedShadowRadius;
@property (nonatomic, readonly) float floatingUnfocusedShadowVerticalOffset;
@property (nonatomic, readonly) float focusedSizeIncrease;
@property (nonatomic, copy) NSArray *overlaySpecs;
@property (nonatomic) int roundedCornersMode;
@property (nonatomic) BOOL shouldEnableFocus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { float x1; float x2; })floatingContentMotionRotation;
- (struct CGPoint { float x1; float x2; })floatingContentMotionTranslation;
- (float)floatingShadowOpacity;
- (float)floatingShadowRadius;
- (struct CGSize { float x1; float x2; })floatingUnfocusedShadowExpansion;
- (float)floatingUnfocusedShadowOpacity;
- (float)floatingUnfocusedShadowRadius;
- (float)floatingUnfocusedShadowVerticalOffset;
- (float)focusedSizeIncrease;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)overlaySpecs;
- (int)roundedCornersMode;
- (void)setOverlaySpecs:(id)arg1;
- (void)setRoundedCornersMode:(int)arg1;
- (void)setShouldEnableFocus:(BOOL)arg1;
- (BOOL)shouldEnableFocus;

@end