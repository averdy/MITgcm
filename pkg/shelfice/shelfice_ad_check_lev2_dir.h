#ifdef ALLOW_SHELFICE
# ifdef ALLOW_SHELFICE_REMESHING
CADJ STORE kTopC            = tapelvi2, key = ilev_2
# endif
CADJ STORE phi0surf         = tapelev2, key = ilev_2
CADJ STORE shelficeMass     = tapelev2, key = ilev_2
CADJ STORE shelficeForcingT = tapelev2, key = ilev_2
CADJ STORE shelficeForcingS = tapelev2, key = ilev_2
CADJ STORE cMeanSHIforT     = tapelev2, key = ilev_2
CADJ STORE cMeanSHIforS     = tapelev2, key = ilev_2
CADJ STORE shelficeFreshWaterFlux = tapelev2, key = ilev_2
CADJ STORE shelficeLoadAnomaly    = tapelev2, key = ilev_2
#endif /* ALLOW_SHELFICE */
