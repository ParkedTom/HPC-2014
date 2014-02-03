function [] = test_renderer(renderer)
    
    h = round(2.^(4:1:9));
    w = h;
    c = 0.5:0.2:1.5;
    maxiter = round(2.^(5:0.5:7.5));
    for i = 1:size(h,2);
        original = render_julia(w(i),h(i),c(i),maxiter(i));
        modified = renderer(w(i),h(i),c(i),maxiter(i));
        assert(isequal(modified,original));
    end
end