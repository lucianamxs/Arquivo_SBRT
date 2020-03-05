	fcoefs = MakeCIFilters(16000,22,150);
	y = ERBFilterBank([1 zeros(1,511)], fcoefs);
	resp = 20*log10(abs(fft(y')));
	freqScale = (0:511)/512*16000;
    fig('fb')
	semilogx(freqScale(1:256),resp(1:256,:));
	axis([100 10000 -40 5])
	xlabel('Frequência [Hz]'); ylabel('Resposta do filtro [dB]');
    
    st.lwidth=2;
    kickAfigure({'fb'},0,st)