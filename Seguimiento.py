 import trackanimation
 from trackanimation.animation import AnimationTrack

 input_directory = " ejemplo-rutas / "
 ibiza_trk = trackanimation.read_track (input_directory)
 sant_josep_trk = ibiza_trk.get_tracks_by_place ( ' Sant Josep de sa Talaia ' , only_points = False )
 sant_josep_trk = sant_josep_trk.time_video_normalize ( tiempo = 10 , velocidad de fotogramas = 10 )

 fig = AnimationTrack ( df_points = sant_josep_trk, dpi = 300 , bg_map = True , map_transparency = 0.5 )
 fig.make_video (archivo_salida = ' filtrado por lugar ' , velocidad de fotogramas = 10 , ancho de línea = 1.0 ) 
